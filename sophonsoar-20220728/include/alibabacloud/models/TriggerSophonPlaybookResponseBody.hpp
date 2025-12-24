// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERSOPHONPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERSOPHONPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TriggerSophonPlaybookResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class TriggerSophonPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerSophonPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerSophonPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TriggerSophonPlaybookResponseBody() = default ;
    TriggerSophonPlaybookResponseBody(const TriggerSophonPlaybookResponseBody &) = default ;
    TriggerSophonPlaybookResponseBody(TriggerSophonPlaybookResponseBody &&) = default ;
    TriggerSophonPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerSophonPlaybookResponseBody() = default ;
    TriggerSophonPlaybookResponseBody& operator=(const TriggerSophonPlaybookResponseBody &) = default ;
    TriggerSophonPlaybookResponseBody& operator=(TriggerSophonPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TriggerSophonPlaybookResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, TriggerSophonPlaybookResponseBodyData) };
    inline TriggerSophonPlaybookResponseBodyData data() { DARABONBA_PTR_GET(data_, TriggerSophonPlaybookResponseBodyData) };
    inline TriggerSophonPlaybookResponseBody& setData(const TriggerSophonPlaybookResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TriggerSophonPlaybookResponseBody& setData(TriggerSophonPlaybookResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TriggerSophonPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details that is returned after the command or playbook is triggered.
    std::shared_ptr<TriggerSophonPlaybookResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
