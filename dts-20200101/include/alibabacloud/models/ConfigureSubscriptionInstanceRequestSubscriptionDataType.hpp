// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUESTSUBSCRIPTIONDATATYPE_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURESUBSCRIPTIONINSTANCEREQUESTSUBSCRIPTIONDATATYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ConfigureSubscriptionInstanceRequestSubscriptionDataType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureSubscriptionInstanceRequestSubscriptionDataType& obj) { 
      DARABONBA_PTR_TO_JSON(DDL, DDL_);
      DARABONBA_PTR_TO_JSON(DML, DML_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigureSubscriptionInstanceRequestSubscriptionDataType& obj) { 
      DARABONBA_PTR_FROM_JSON(DDL, DDL_);
      DARABONBA_PTR_FROM_JSON(DML, DML_);
    };
    ConfigureSubscriptionInstanceRequestSubscriptionDataType() = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionDataType(const ConfigureSubscriptionInstanceRequestSubscriptionDataType &) = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionDataType(ConfigureSubscriptionInstanceRequestSubscriptionDataType &&) = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureSubscriptionInstanceRequestSubscriptionDataType() = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionDataType& operator=(const ConfigureSubscriptionInstanceRequestSubscriptionDataType &) = default ;
    ConfigureSubscriptionInstanceRequestSubscriptionDataType& operator=(ConfigureSubscriptionInstanceRequestSubscriptionDataType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DDL_ != nullptr
        && this->DML_ != nullptr; };
    // DDL Field Functions 
    bool hasDDL() const { return this->DDL_ != nullptr;};
    void deleteDDL() { this->DDL_ = nullptr;};
    inline bool DDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, false) };
    inline ConfigureSubscriptionInstanceRequestSubscriptionDataType& setDDL(bool DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


    // DML Field Functions 
    bool hasDML() const { return this->DML_ != nullptr;};
    void deleteDML() { this->DML_ = nullptr;};
    inline bool DML() const { DARABONBA_PTR_GET_DEFAULT(DML_, false) };
    inline ConfigureSubscriptionInstanceRequestSubscriptionDataType& setDML(bool DML) { DARABONBA_PTR_SET_VALUE(DML_, DML) };


  protected:
    // Specifies whether to track DDL statements. Default value: true. Valid values:
    // 
    // *   **true**: tracks DDL statements.
    // *   **false**: does not track DDL statements.
    // 
    // This parameter is required.
    std::shared_ptr<bool> DDL_ = nullptr;
    // Specifies whether to track DML statements. Default value: true. Valid values:
    // 
    // *   **true**: tracks DML statements.
    // *   **false**: does not track DML statements.
    // 
    // This parameter is required.
    std::shared_ptr<bool> DML_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
