// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TESTEVENTSOURCECONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class TestEventSourceConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestEventSourceConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(IsSucceed, isSucceed_);
    };
    friend void from_json(const Darabonba::Json& j, TestEventSourceConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(IsSucceed, isSucceed_);
    };
    TestEventSourceConfigResponseBodyData() = default ;
    TestEventSourceConfigResponseBodyData(const TestEventSourceConfigResponseBodyData &) = default ;
    TestEventSourceConfigResponseBodyData(TestEventSourceConfigResponseBodyData &&) = default ;
    TestEventSourceConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestEventSourceConfigResponseBodyData() = default ;
    TestEventSourceConfigResponseBodyData& operator=(const TestEventSourceConfigResponseBodyData &) = default ;
    TestEventSourceConfigResponseBodyData& operator=(TestEventSourceConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkItem_ != nullptr
        && this->errorMsg_ != nullptr && this->isSucceed_ != nullptr; };
    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline string checkItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
    inline TestEventSourceConfigResponseBodyData& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TestEventSourceConfigResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // isSucceed Field Functions 
    bool hasIsSucceed() const { return this->isSucceed_ != nullptr;};
    void deleteIsSucceed() { this->isSucceed_ = nullptr;};
    inline string isSucceed() const { DARABONBA_PTR_GET_DEFAULT(isSucceed_, "") };
    inline TestEventSourceConfigResponseBodyData& setIsSucceed(string isSucceed) { DARABONBA_PTR_SET_VALUE(isSucceed_, isSucceed) };


  protected:
    // The name of the check item.
    std::shared_ptr<string> checkItem_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Indicates whether the check item is executed.
    std::shared_ptr<string> isSucceed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
