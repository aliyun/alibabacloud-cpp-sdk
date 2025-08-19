// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLTEECONFIG_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLTEECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolTeeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolTeeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(tee_enable, teeEnable_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolTeeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(tee_enable, teeEnable_);
    };
    NodepoolTeeConfig() = default ;
    NodepoolTeeConfig(const NodepoolTeeConfig &) = default ;
    NodepoolTeeConfig(NodepoolTeeConfig &&) = default ;
    NodepoolTeeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolTeeConfig() = default ;
    NodepoolTeeConfig& operator=(const NodepoolTeeConfig &) = default ;
    NodepoolTeeConfig& operator=(NodepoolTeeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->teeEnable_ != nullptr; };
    // teeEnable Field Functions 
    bool hasTeeEnable() const { return this->teeEnable_ != nullptr;};
    void deleteTeeEnable() { this->teeEnable_ = nullptr;};
    inline bool teeEnable() const { DARABONBA_PTR_GET_DEFAULT(teeEnable_, false) };
    inline NodepoolTeeConfig& setTeeEnable(bool teeEnable) { DARABONBA_PTR_SET_VALUE(teeEnable_, teeEnable) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> teeEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
