// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEABJOBLISTRESPONSEBODYDATAINPUT_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEABJOBLISTRESPONSEBODYDATAINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryTraceAbJobListResponseBodyDataInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTraceAbJobListResponseBodyDataInput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTraceAbJobListResponseBodyDataInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryTraceAbJobListResponseBodyDataInput() = default ;
    QueryTraceAbJobListResponseBodyDataInput(const QueryTraceAbJobListResponseBodyDataInput &) = default ;
    QueryTraceAbJobListResponseBodyDataInput(QueryTraceAbJobListResponseBodyDataInput &&) = default ;
    QueryTraceAbJobListResponseBodyDataInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTraceAbJobListResponseBodyDataInput() = default ;
    QueryTraceAbJobListResponseBodyDataInput& operator=(const QueryTraceAbJobListResponseBodyDataInput &) = default ;
    QueryTraceAbJobListResponseBodyDataInput& operator=(QueryTraceAbJobListResponseBodyDataInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->type_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline QueryTraceAbJobListResponseBodyDataInput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryTraceAbJobListResponseBodyDataInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The specific input file information.
    std::shared_ptr<string> media_ = nullptr;
    // The type of the input file. Valid values:
    // 
    // 1.  OSS: an Object Storage Service (OSS) object.
    // 2.  Media: a media asset.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
