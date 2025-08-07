// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPoolResponseBodyPoolInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PoolInfo, poolInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolInfo, poolInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPoolResponseBody() = default ;
    GetPoolResponseBody(const GetPoolResponseBody &) = default ;
    GetPoolResponseBody(GetPoolResponseBody &&) = default ;
    GetPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPoolResponseBody() = default ;
    GetPoolResponseBody& operator=(const GetPoolResponseBody &) = default ;
    GetPoolResponseBody& operator=(GetPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->poolInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // poolInfo Field Functions 
    bool hasPoolInfo() const { return this->poolInfo_ != nullptr;};
    void deletePoolInfo() { this->poolInfo_ = nullptr;};
    inline const GetPoolResponseBodyPoolInfo & poolInfo() const { DARABONBA_PTR_GET_CONST(poolInfo_, GetPoolResponseBodyPoolInfo) };
    inline GetPoolResponseBodyPoolInfo poolInfo() { DARABONBA_PTR_GET(poolInfo_, GetPoolResponseBodyPoolInfo) };
    inline GetPoolResponseBody& setPoolInfo(const GetPoolResponseBodyPoolInfo & poolInfo) { DARABONBA_PTR_SET_VALUE(poolInfo_, poolInfo) };
    inline GetPoolResponseBody& setPoolInfo(GetPoolResponseBodyPoolInfo && poolInfo) { DARABONBA_PTR_SET_RVALUE(poolInfo_, poolInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetPoolResponseBodyPoolInfo> poolInfo_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
