// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGIESRESPONSEBODYSOARSTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGIESRESPONSEBODYSOARSTRATEGIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategiesResponseBodySoarStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategiesResponseBodySoarStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategiesResponseBodySoarStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSoarStrategiesResponseBodySoarStrategies() = default ;
    DescribeSoarStrategiesResponseBodySoarStrategies(const DescribeSoarStrategiesResponseBodySoarStrategies &) = default ;
    DescribeSoarStrategiesResponseBodySoarStrategies(DescribeSoarStrategiesResponseBodySoarStrategies &&) = default ;
    DescribeSoarStrategiesResponseBodySoarStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategiesResponseBodySoarStrategies() = default ;
    DescribeSoarStrategiesResponseBodySoarStrategies& operator=(const DescribeSoarStrategiesResponseBodySoarStrategies &) = default ;
    DescribeSoarStrategiesResponseBodySoarStrategies& operator=(DescribeSoarStrategiesResponseBodySoarStrategies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creator_ != nullptr
        && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->runMode_ != nullptr && this->type_ != nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeSoarStrategiesResponseBodySoarStrategies& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSoarStrategiesResponseBodySoarStrategies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSoarStrategiesResponseBodySoarStrategies& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSoarStrategiesResponseBodySoarStrategies& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSoarStrategiesResponseBodySoarStrategies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSoarStrategiesResponseBodySoarStrategies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline DescribeSoarStrategiesResponseBodySoarStrategies& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSoarStrategiesResponseBodySoarStrategies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The Alibaba Cloud account ID of the creator. Default value: 0. The value indicates a system user.
    std::shared_ptr<string> creator_ = nullptr;
    // The description of the policy.
    std::shared_ptr<string> description_ = nullptr;
    // The timestamp when the policy was created. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The timestamp when the policy was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> name_ = nullptr;
    // The execution mode. Valid values:
    // 
    // *   runmode_TRIGGER_BY_USER: manually executed
    std::shared_ptr<string> runMode_ = nullptr;
    // The type of the policy. Valid values:
    // 
    // *   type_vulfix: vulnerability operations
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
