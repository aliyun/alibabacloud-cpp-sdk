// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
    };
    GetPoolRequest() = default ;
    GetPoolRequest(const GetPoolRequest &) = default ;
    GetPoolRequest(GetPoolRequest &&) = default ;
    GetPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPoolRequest() = default ;
    GetPoolRequest& operator=(const GetPoolRequest &) = default ;
    GetPoolRequest& operator=(GetPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->poolName_ != nullptr; };
    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string poolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline GetPoolRequest& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> poolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
