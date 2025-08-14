// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOPYRIGHTJOBLISTRESPONSEBODYDATAOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOPYRIGHTJOBLISTRESPONSEBODYDATAOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryCopyrightJobListResponseBodyDataOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCopyrightJobListResponseBodyDataOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCopyrightJobListResponseBodyDataOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryCopyrightJobListResponseBodyDataOutput() = default ;
    QueryCopyrightJobListResponseBodyDataOutput(const QueryCopyrightJobListResponseBodyDataOutput &) = default ;
    QueryCopyrightJobListResponseBodyDataOutput(QueryCopyrightJobListResponseBodyDataOutput &&) = default ;
    QueryCopyrightJobListResponseBodyDataOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCopyrightJobListResponseBodyDataOutput() = default ;
    QueryCopyrightJobListResponseBodyDataOutput& operator=(const QueryCopyrightJobListResponseBodyDataOutput &) = default ;
    QueryCopyrightJobListResponseBodyDataOutput& operator=(QueryCopyrightJobListResponseBodyDataOutput &&) = default ;
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
    inline QueryCopyrightJobListResponseBodyDataOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryCopyrightJobListResponseBodyDataOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> media_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
