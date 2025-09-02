// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPITESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPITESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApiTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TestId, testId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TestId, testId_);
    };
    GetDataServiceApiTestRequest() = default ;
    GetDataServiceApiTestRequest(const GetDataServiceApiTestRequest &) = default ;
    GetDataServiceApiTestRequest(GetDataServiceApiTestRequest &&) = default ;
    GetDataServiceApiTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiTestRequest() = default ;
    GetDataServiceApiTestRequest& operator=(const GetDataServiceApiTestRequest &) = default ;
    GetDataServiceApiTestRequest& operator=(GetDataServiceApiTestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->testId_ != nullptr; };
    // testId Field Functions 
    bool hasTestId() const { return this->testId_ != nullptr;};
    void deleteTestId() { this->testId_ = nullptr;};
    inline int64_t testId() const { DARABONBA_PTR_GET_DEFAULT(testId_, 0L) };
    inline GetDataServiceApiTestRequest& setTestId(int64_t testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


  protected:
    // The Id of the test. TestDataServiceApi is executed asynchronously after the API is called and the test Id is returned. You can also use ListDataServiceApiTest to obtain the latest test Id.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> testId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
