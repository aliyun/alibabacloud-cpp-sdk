// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKIBANASSOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKIBANASSOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateKibanaSsoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKibanaSsoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKibanaSsoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
    };
    UpdateKibanaSsoRequest() = default ;
    UpdateKibanaSsoRequest(const UpdateKibanaSsoRequest &) = default ;
    UpdateKibanaSsoRequest(UpdateKibanaSsoRequest &&) = default ;
    UpdateKibanaSsoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKibanaSsoRequest() = default ;
    UpdateKibanaSsoRequest& operator=(const UpdateKibanaSsoRequest &) = default ;
    UpdateKibanaSsoRequest& operator=(UpdateKibanaSsoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->networkType_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpdateKibanaSsoRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline UpdateKibanaSsoRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    // This parameter is required.
    shared_ptr<string> enable_ {};
    // PUBLIC, PRIVATE
    // 
    // This parameter is required.
    shared_ptr<string> networkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
