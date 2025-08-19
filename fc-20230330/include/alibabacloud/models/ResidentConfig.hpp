// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIDENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RESIDENTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ResidentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResidentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(poolId, poolId_);
    };
    friend void from_json(const Darabonba::Json& j, ResidentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(poolId, poolId_);
    };
    ResidentConfig() = default ;
    ResidentConfig(const ResidentConfig &) = default ;
    ResidentConfig(ResidentConfig &&) = default ;
    ResidentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResidentConfig() = default ;
    ResidentConfig& operator=(const ResidentConfig &) = default ;
    ResidentConfig& operator=(ResidentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->poolId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ResidentConfig& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // poolId Field Functions 
    bool hasPoolId() const { return this->poolId_ != nullptr;};
    void deletePoolId() { this->poolId_ = nullptr;};
    inline string poolId() const { DARABONBA_PTR_GET_DEFAULT(poolId_, "") };
    inline ResidentConfig& setPoolId(string poolId) { DARABONBA_PTR_SET_VALUE(poolId_, poolId) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> poolId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
