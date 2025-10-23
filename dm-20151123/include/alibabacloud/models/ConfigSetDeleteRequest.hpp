// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(IsForce, isForce_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(IsForce, isForce_);
    };
    ConfigSetDeleteRequest() = default ;
    ConfigSetDeleteRequest(const ConfigSetDeleteRequest &) = default ;
    ConfigSetDeleteRequest(ConfigSetDeleteRequest &&) = default ;
    ConfigSetDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetDeleteRequest() = default ;
    ConfigSetDeleteRequest& operator=(const ConfigSetDeleteRequest &) = default ;
    ConfigSetDeleteRequest& operator=(ConfigSetDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && return this->isForce_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ConfigSetDeleteRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // isForce Field Functions 
    bool hasIsForce() const { return this->isForce_ != nullptr;};
    void deleteIsForce() { this->isForce_ = nullptr;};
    inline bool isForce() const { DARABONBA_PTR_GET_DEFAULT(isForce_, false) };
    inline ConfigSetDeleteRequest& setIsForce(bool isForce) { DARABONBA_PTR_SET_VALUE(isForce_, isForce) };


  protected:
    std::shared_ptr<string> ids_ = nullptr;
    std::shared_ptr<bool> isForce_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
