// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENSITIVEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSENSITIVEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetSensitiveDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSensitiveDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(SensitiveData, sensitiveData_);
    };
    friend void from_json(const Darabonba::Json& j, GetSensitiveDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(SensitiveData, sensitiveData_);
    };
    GetSensitiveDataResponseBody() = default ;
    GetSensitiveDataResponseBody(const GetSensitiveDataResponseBody &) = default ;
    GetSensitiveDataResponseBody(GetSensitiveDataResponseBody &&) = default ;
    GetSensitiveDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSensitiveDataResponseBody() = default ;
    GetSensitiveDataResponseBody& operator=(const GetSensitiveDataResponseBody &) = default ;
    GetSensitiveDataResponseBody& operator=(GetSensitiveDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sensitiveData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSensitiveDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveData Field Functions 
    bool hasSensitiveData() const { return this->sensitiveData_ != nullptr;};
    void deleteSensitiveData() { this->sensitiveData_ = nullptr;};
    inline     const Darabonba::Json & sensitiveData() const { DARABONBA_GET(sensitiveData_) };
    Darabonba::Json & sensitiveData() { DARABONBA_GET(sensitiveData_) };
    inline GetSensitiveDataResponseBody& setSensitiveData(const Darabonba::Json & sensitiveData) { DARABONBA_SET_VALUE(sensitiveData_, sensitiveData) };
    inline GetSensitiveDataResponseBody& setSensitiveData(Darabonba::Json & sensitiveData) { DARABONBA_SET_RVALUE(sensitiveData_, sensitiveData) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the sensitive data returned. The information includes totalCount and sensDatas. sensDatas includes the following parameters:
    // 
    // *   guid: the ID of the metadata of the tenant. For example, the ID of the metadata in the MaxCompute compute engine is in the Project name.Table name.Column name format.
    // *   sensType: the type of the sensitive data.
    // *   sensLevel: the sensitivity level of the sensitive data
    Darabonba::Json sensitiveData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
