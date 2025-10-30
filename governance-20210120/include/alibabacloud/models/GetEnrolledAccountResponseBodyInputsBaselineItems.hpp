// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODYINPUTSBASELINEITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODYINPUTSBASELINEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetEnrolledAccountResponseBodyInputsBaselineItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnrolledAccountResponseBodyInputsBaselineItems& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnrolledAccountResponseBodyInputsBaselineItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetEnrolledAccountResponseBodyInputsBaselineItems() = default ;
    GetEnrolledAccountResponseBodyInputsBaselineItems(const GetEnrolledAccountResponseBodyInputsBaselineItems &) = default ;
    GetEnrolledAccountResponseBodyInputsBaselineItems(GetEnrolledAccountResponseBodyInputsBaselineItems &&) = default ;
    GetEnrolledAccountResponseBodyInputsBaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnrolledAccountResponseBodyInputsBaselineItems() = default ;
    GetEnrolledAccountResponseBodyInputsBaselineItems& operator=(const GetEnrolledAccountResponseBodyInputsBaselineItems &) = default ;
    GetEnrolledAccountResponseBodyInputsBaselineItems& operator=(GetEnrolledAccountResponseBodyInputsBaselineItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->name_ == nullptr && return this->skip_ == nullptr && return this->version_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetEnrolledAccountResponseBodyInputsBaselineItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetEnrolledAccountResponseBodyInputsBaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline bool skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
    inline GetEnrolledAccountResponseBodyInputsBaselineItems& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetEnrolledAccountResponseBodyInputsBaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The configurations of the baseline item.
    std::shared_ptr<string> config_ = nullptr;
    // The name of the baseline item.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether baseline item is skipped. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> skip_ = nullptr;
    // The version of the baseline item.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
