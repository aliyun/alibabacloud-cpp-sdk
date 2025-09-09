// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBRDSNAMELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBRDSNAMELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsDbRdsNameListResponseBodyInstanceNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDbRdsNameListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbRdsNameListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceNameList, instanceNameList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbRdsNameListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceNameList, instanceNameList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDrdsDbRdsNameListResponseBody() = default ;
    DescribeDrdsDbRdsNameListResponseBody(const DescribeDrdsDbRdsNameListResponseBody &) = default ;
    DescribeDrdsDbRdsNameListResponseBody(DescribeDrdsDbRdsNameListResponseBody &&) = default ;
    DescribeDrdsDbRdsNameListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbRdsNameListResponseBody() = default ;
    DescribeDrdsDbRdsNameListResponseBody& operator=(const DescribeDrdsDbRdsNameListResponseBody &) = default ;
    DescribeDrdsDbRdsNameListResponseBody& operator=(DescribeDrdsDbRdsNameListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceNameList_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // instanceNameList Field Functions 
    bool hasInstanceNameList() const { return this->instanceNameList_ != nullptr;};
    void deleteInstanceNameList() { this->instanceNameList_ = nullptr;};
    inline const DescribeDrdsDbRdsNameListResponseBodyInstanceNameList & instanceNameList() const { DARABONBA_PTR_GET_CONST(instanceNameList_, DescribeDrdsDbRdsNameListResponseBodyInstanceNameList) };
    inline DescribeDrdsDbRdsNameListResponseBodyInstanceNameList instanceNameList() { DARABONBA_PTR_GET(instanceNameList_, DescribeDrdsDbRdsNameListResponseBodyInstanceNameList) };
    inline DescribeDrdsDbRdsNameListResponseBody& setInstanceNameList(const DescribeDrdsDbRdsNameListResponseBodyInstanceNameList & instanceNameList) { DARABONBA_PTR_SET_VALUE(instanceNameList_, instanceNameList) };
    inline DescribeDrdsDbRdsNameListResponseBody& setInstanceNameList(DescribeDrdsDbRdsNameListResponseBodyInstanceNameList && instanceNameList) { DARABONBA_PTR_SET_RVALUE(instanceNameList_, instanceNameList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDrdsDbRdsNameListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDrdsDbRdsNameListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates the instances that are used to store the data of a database.
    std::shared_ptr<DescribeDrdsDbRdsNameListResponseBodyInstanceNameList> instanceNameList_ = nullptr;
    // Indicates the ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
