// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOSSStatisResponseBodyOssStatisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetOSSStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxStorageUtilization, maxStorageUtilization_);
      DARABONBA_PTR_TO_JSON(OssStatisList, ossStatisList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxStorageUtilization, maxStorageUtilization_);
      DARABONBA_PTR_FROM_JSON(OssStatisList, ossStatisList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOSSStatisResponseBody() = default ;
    GetOSSStatisResponseBody(const GetOSSStatisResponseBody &) = default ;
    GetOSSStatisResponseBody(GetOSSStatisResponseBody &&) = default ;
    GetOSSStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSStatisResponseBody() = default ;
    GetOSSStatisResponseBody& operator=(const GetOSSStatisResponseBody &) = default ;
    GetOSSStatisResponseBody& operator=(GetOSSStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxStorageUtilization_ != nullptr
        && this->ossStatisList_ != nullptr && this->requestId_ != nullptr; };
    // maxStorageUtilization Field Functions 
    bool hasMaxStorageUtilization() const { return this->maxStorageUtilization_ != nullptr;};
    void deleteMaxStorageUtilization() { this->maxStorageUtilization_ = nullptr;};
    inline int64_t maxStorageUtilization() const { DARABONBA_PTR_GET_DEFAULT(maxStorageUtilization_, 0L) };
    inline GetOSSStatisResponseBody& setMaxStorageUtilization(int64_t maxStorageUtilization) { DARABONBA_PTR_SET_VALUE(maxStorageUtilization_, maxStorageUtilization) };


    // ossStatisList Field Functions 
    bool hasOssStatisList() const { return this->ossStatisList_ != nullptr;};
    void deleteOssStatisList() { this->ossStatisList_ = nullptr;};
    inline const GetOSSStatisResponseBodyOssStatisList & ossStatisList() const { DARABONBA_PTR_GET_CONST(ossStatisList_, GetOSSStatisResponseBodyOssStatisList) };
    inline GetOSSStatisResponseBodyOssStatisList ossStatisList() { DARABONBA_PTR_GET(ossStatisList_, GetOSSStatisResponseBodyOssStatisList) };
    inline GetOSSStatisResponseBody& setOssStatisList(const GetOSSStatisResponseBodyOssStatisList & ossStatisList) { DARABONBA_PTR_SET_VALUE(ossStatisList_, ossStatisList) };
    inline GetOSSStatisResponseBody& setOssStatisList(GetOSSStatisResponseBodyOssStatisList && ossStatisList) { DARABONBA_PTR_SET_RVALUE(ossStatisList_, ossStatisList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOSSStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> maxStorageUtilization_ = nullptr;
    std::shared_ptr<GetOSSStatisResponseBodyOssStatisList> ossStatisList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
