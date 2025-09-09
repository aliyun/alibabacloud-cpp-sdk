// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKRESULTRESPONSEBODYPRECHECKRESULTSUBCHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKRESULTRESPONSEBODYPRECHECKRESULTSUBCHECKITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsgCode, errorMsgCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsgParams, errorMsgParams_);
      DARABONBA_PTR_TO_JSON(PreCheckItemName, preCheckItemName_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsgCode, errorMsgCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsgParams, errorMsgParams_);
      DARABONBA_PTR_FROM_JSON(PreCheckItemName, preCheckItemName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems() = default ;
    DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems(const DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems &) = default ;
    DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems(DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems &&) = default ;
    DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems() = default ;
    DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& operator=(const DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems &) = default ;
    DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& operator=(DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMsgCode_ != nullptr
        && this->errorMsgParams_ != nullptr && this->preCheckItemName_ != nullptr && this->state_ != nullptr; };
    // errorMsgCode Field Functions 
    bool hasErrorMsgCode() const { return this->errorMsgCode_ != nullptr;};
    void deleteErrorMsgCode() { this->errorMsgCode_ = nullptr;};
    inline string errorMsgCode() const { DARABONBA_PTR_GET_DEFAULT(errorMsgCode_, "") };
    inline DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& setErrorMsgCode(string errorMsgCode) { DARABONBA_PTR_SET_VALUE(errorMsgCode_, errorMsgCode) };


    // errorMsgParams Field Functions 
    bool hasErrorMsgParams() const { return this->errorMsgParams_ != nullptr;};
    void deleteErrorMsgParams() { this->errorMsgParams_ = nullptr;};
    inline const vector<string> & errorMsgParams() const { DARABONBA_PTR_GET_CONST(errorMsgParams_, vector<string>) };
    inline vector<string> errorMsgParams() { DARABONBA_PTR_GET(errorMsgParams_, vector<string>) };
    inline DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& setErrorMsgParams(const vector<string> & errorMsgParams) { DARABONBA_PTR_SET_VALUE(errorMsgParams_, errorMsgParams) };
    inline DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& setErrorMsgParams(vector<string> && errorMsgParams) { DARABONBA_PTR_SET_RVALUE(errorMsgParams_, errorMsgParams) };


    // preCheckItemName Field Functions 
    bool hasPreCheckItemName() const { return this->preCheckItemName_ != nullptr;};
    void deletePreCheckItemName() { this->preCheckItemName_ = nullptr;};
    inline string preCheckItemName() const { DARABONBA_PTR_GET_DEFAULT(preCheckItemName_, "") };
    inline DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& setPreCheckItemName(string preCheckItemName) { DARABONBA_PTR_SET_VALUE(preCheckItemName_, preCheckItemName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Indicates the error code that is returned by a subtask.
    std::shared_ptr<string> errorMsgCode_ = nullptr;
    // Indicates an error message.
    std::shared_ptr<vector<string>> errorMsgParams_ = nullptr;
    // Indicates the name of the subtask.
    std::shared_ptr<string> preCheckItemName_ = nullptr;
    // Indicates the state of the subtask.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
