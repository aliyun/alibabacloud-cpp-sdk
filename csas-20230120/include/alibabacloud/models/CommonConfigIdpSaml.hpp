// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONCONFIGIDPSAML_HPP_
#define ALIBABACLOUD_MODELS_COMMONCONFIGIDPSAML_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CommonConfigIdpSaml : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonConfigIdpSaml& obj) { 
      DARABONBA_PTR_TO_JSON(Acs, acs_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
    };
    friend void from_json(const Darabonba::Json& j, CommonConfigIdpSaml& obj) { 
      DARABONBA_PTR_FROM_JSON(Acs, acs_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
    };
    CommonConfigIdpSaml() = default ;
    CommonConfigIdpSaml(const CommonConfigIdpSaml &) = default ;
    CommonConfigIdpSaml(CommonConfigIdpSaml &&) = default ;
    CommonConfigIdpSaml(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonConfigIdpSaml() = default ;
    CommonConfigIdpSaml& operator=(const CommonConfigIdpSaml &) = default ;
    CommonConfigIdpSaml& operator=(CommonConfigIdpSaml &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acs_ != nullptr
        && this->metadata_ != nullptr; };
    // acs Field Functions 
    bool hasAcs() const { return this->acs_ != nullptr;};
    void deleteAcs() { this->acs_ = nullptr;};
    inline string acs() const { DARABONBA_PTR_GET_DEFAULT(acs_, "") };
    inline CommonConfigIdpSaml& setAcs(string acs) { DARABONBA_PTR_SET_VALUE(acs_, acs) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string metadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CommonConfigIdpSaml& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


  protected:
    std::shared_ptr<string> acs_ = nullptr;
    std::shared_ptr<string> metadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
