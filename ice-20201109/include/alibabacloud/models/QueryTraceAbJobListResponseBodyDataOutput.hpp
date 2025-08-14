// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEABJOBLISTRESPONSEBODYDATAOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEABJOBLISTRESPONSEBODYDATAOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryTraceAbJobListResponseBodyDataOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTraceAbJobListResponseBodyDataOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTraceAbJobListResponseBodyDataOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryTraceAbJobListResponseBodyDataOutput() = default ;
    QueryTraceAbJobListResponseBodyDataOutput(const QueryTraceAbJobListResponseBodyDataOutput &) = default ;
    QueryTraceAbJobListResponseBodyDataOutput(QueryTraceAbJobListResponseBodyDataOutput &&) = default ;
    QueryTraceAbJobListResponseBodyDataOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTraceAbJobListResponseBodyDataOutput() = default ;
    QueryTraceAbJobListResponseBodyDataOutput& operator=(const QueryTraceAbJobListResponseBodyDataOutput &) = default ;
    QueryTraceAbJobListResponseBodyDataOutput& operator=(QueryTraceAbJobListResponseBodyDataOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->media_ != nullptr
        && this->type_ != nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline QueryTraceAbJobListResponseBodyDataOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryTraceAbJobListResponseBodyDataOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> media_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
