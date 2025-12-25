// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DBVERSIONDETAILSPECS_HPP_
#define ALIBABACLOUD_MODELS_DBVERSIONDETAILSPECS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DBVersionDetailSpecsComponentSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DBVersionDetailSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DBVersionDetailSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(componentSpecs, componentSpecs_);
      DARABONBA_PTR_TO_JSON(isHA, isHA_);
      DARABONBA_PTR_TO_JSON(isStandalone, isStandalone_);
      DARABONBA_PTR_TO_JSON(zoneMode, zoneMode_);
    };
    friend void from_json(const Darabonba::Json& j, DBVersionDetailSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(componentSpecs, componentSpecs_);
      DARABONBA_PTR_FROM_JSON(isHA, isHA_);
      DARABONBA_PTR_FROM_JSON(isStandalone, isStandalone_);
      DARABONBA_PTR_FROM_JSON(zoneMode, zoneMode_);
    };
    DBVersionDetailSpecs() = default ;
    DBVersionDetailSpecs(const DBVersionDetailSpecs &) = default ;
    DBVersionDetailSpecs(DBVersionDetailSpecs &&) = default ;
    DBVersionDetailSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DBVersionDetailSpecs() = default ;
    DBVersionDetailSpecs& operator=(const DBVersionDetailSpecs &) = default ;
    DBVersionDetailSpecs& operator=(DBVersionDetailSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentSpecs_ == nullptr
        && return this->isHA_ == nullptr && return this->isStandalone_ == nullptr && return this->zoneMode_ == nullptr; };
    // componentSpecs Field Functions 
    bool hasComponentSpecs() const { return this->componentSpecs_ != nullptr;};
    void deleteComponentSpecs() { this->componentSpecs_ = nullptr;};
    inline const vector<Models::DBVersionDetailSpecsComponentSpecs> & componentSpecs() const { DARABONBA_PTR_GET_CONST(componentSpecs_, vector<Models::DBVersionDetailSpecsComponentSpecs>) };
    inline vector<Models::DBVersionDetailSpecsComponentSpecs> componentSpecs() { DARABONBA_PTR_GET(componentSpecs_, vector<Models::DBVersionDetailSpecsComponentSpecs>) };
    inline DBVersionDetailSpecs& setComponentSpecs(const vector<Models::DBVersionDetailSpecsComponentSpecs> & componentSpecs) { DARABONBA_PTR_SET_VALUE(componentSpecs_, componentSpecs) };
    inline DBVersionDetailSpecs& setComponentSpecs(vector<Models::DBVersionDetailSpecsComponentSpecs> && componentSpecs) { DARABONBA_PTR_SET_RVALUE(componentSpecs_, componentSpecs) };


    // isHA Field Functions 
    bool hasIsHA() const { return this->isHA_ != nullptr;};
    void deleteIsHA() { this->isHA_ = nullptr;};
    inline bool isHA() const { DARABONBA_PTR_GET_DEFAULT(isHA_, false) };
    inline DBVersionDetailSpecs& setIsHA(bool isHA) { DARABONBA_PTR_SET_VALUE(isHA_, isHA) };


    // isStandalone Field Functions 
    bool hasIsStandalone() const { return this->isStandalone_ != nullptr;};
    void deleteIsStandalone() { this->isStandalone_ = nullptr;};
    inline bool isStandalone() const { DARABONBA_PTR_GET_DEFAULT(isStandalone_, false) };
    inline DBVersionDetailSpecs& setIsStandalone(bool isStandalone) { DARABONBA_PTR_SET_VALUE(isStandalone_, isStandalone) };


    // zoneMode Field Functions 
    bool hasZoneMode() const { return this->zoneMode_ != nullptr;};
    void deleteZoneMode() { this->zoneMode_ = nullptr;};
    inline string zoneMode() const { DARABONBA_PTR_GET_DEFAULT(zoneMode_, "") };
    inline DBVersionDetailSpecs& setZoneMode(string zoneMode) { DARABONBA_PTR_SET_VALUE(zoneMode_, zoneMode) };


  protected:
    std::shared_ptr<vector<Models::DBVersionDetailSpecsComponentSpecs>> componentSpecs_ = nullptr;
    std::shared_ptr<bool> isHA_ = nullptr;
    std::shared_ptr<bool> isStandalone_ = nullptr;
    std::shared_ptr<string> zoneMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
