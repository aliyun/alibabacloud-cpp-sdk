// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERSATIONDETAILINFORESPONSEBODYDATAOUTPUTTAGS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERSATIONDETAILINFORESPONSEBODYDATAOUTPUTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryConversationDetailInfoResponseBodyDataOutputTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConversationDetailInfoResponseBodyDataOutputTags& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OutputTagDescription, outputTagDescription_);
      DARABONBA_PTR_TO_JSON(OutputTagName, outputTagName_);
      DARABONBA_PTR_TO_JSON(OutputTagValue, outputTagValue_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConversationDetailInfoResponseBodyDataOutputTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OutputTagDescription, outputTagDescription_);
      DARABONBA_PTR_FROM_JSON(OutputTagName, outputTagName_);
      DARABONBA_PTR_FROM_JSON(OutputTagValue, outputTagValue_);
    };
    QueryConversationDetailInfoResponseBodyDataOutputTags() = default ;
    QueryConversationDetailInfoResponseBodyDataOutputTags(const QueryConversationDetailInfoResponseBodyDataOutputTags &) = default ;
    QueryConversationDetailInfoResponseBodyDataOutputTags(QueryConversationDetailInfoResponseBodyDataOutputTags &&) = default ;
    QueryConversationDetailInfoResponseBodyDataOutputTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConversationDetailInfoResponseBodyDataOutputTags() = default ;
    QueryConversationDetailInfoResponseBodyDataOutputTags& operator=(const QueryConversationDetailInfoResponseBodyDataOutputTags &) = default ;
    QueryConversationDetailInfoResponseBodyDataOutputTags& operator=(QueryConversationDetailInfoResponseBodyDataOutputTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->outputTagDescription_ == nullptr && return this->outputTagName_ == nullptr && return this->outputTagValue_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryConversationDetailInfoResponseBodyDataOutputTags& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // outputTagDescription Field Functions 
    bool hasOutputTagDescription() const { return this->outputTagDescription_ != nullptr;};
    void deleteOutputTagDescription() { this->outputTagDescription_ = nullptr;};
    inline string outputTagDescription() const { DARABONBA_PTR_GET_DEFAULT(outputTagDescription_, "") };
    inline QueryConversationDetailInfoResponseBodyDataOutputTags& setOutputTagDescription(string outputTagDescription) { DARABONBA_PTR_SET_VALUE(outputTagDescription_, outputTagDescription) };


    // outputTagName Field Functions 
    bool hasOutputTagName() const { return this->outputTagName_ != nullptr;};
    void deleteOutputTagName() { this->outputTagName_ = nullptr;};
    inline string outputTagName() const { DARABONBA_PTR_GET_DEFAULT(outputTagName_, "") };
    inline QueryConversationDetailInfoResponseBodyDataOutputTags& setOutputTagName(string outputTagName) { DARABONBA_PTR_SET_VALUE(outputTagName_, outputTagName) };


    // outputTagValue Field Functions 
    bool hasOutputTagValue() const { return this->outputTagValue_ != nullptr;};
    void deleteOutputTagValue() { this->outputTagValue_ = nullptr;};
    inline string outputTagValue() const { DARABONBA_PTR_GET_DEFAULT(outputTagValue_, "") };
    inline QueryConversationDetailInfoResponseBodyDataOutputTags& setOutputTagValue(string outputTagValue) { DARABONBA_PTR_SET_VALUE(outputTagValue_, outputTagValue) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> outputTagDescription_ = nullptr;
    std::shared_ptr<string> outputTagName_ = nullptr;
    std::shared_ptr<string> outputTagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
