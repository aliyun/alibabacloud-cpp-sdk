// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOPYRIGHTEXTRACTJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOPYRIGHTEXTRACTJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryCopyrightExtractJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCopyrightExtractJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCopyrightExtractJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    QueryCopyrightExtractJobResponseBodyData() = default ;
    QueryCopyrightExtractJobResponseBodyData(const QueryCopyrightExtractJobResponseBodyData &) = default ;
    QueryCopyrightExtractJobResponseBodyData(QueryCopyrightExtractJobResponseBodyData &&) = default ;
    QueryCopyrightExtractJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCopyrightExtractJobResponseBodyData() = default ;
    QueryCopyrightExtractJobResponseBodyData& operator=(const QueryCopyrightExtractJobResponseBodyData &) = default ;
    QueryCopyrightExtractJobResponseBodyData& operator=(QueryCopyrightExtractJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCopyrightExtractJobResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
