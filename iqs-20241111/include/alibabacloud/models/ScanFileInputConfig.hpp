// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANFILEINPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SCANFILEINPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ScanFileInputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanFileInputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(autoCrop, autoCrop_);
      DARABONBA_PTR_TO_JSON(autoRotate, autoRotate_);
    };
    friend void from_json(const Darabonba::Json& j, ScanFileInputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(autoCrop, autoCrop_);
      DARABONBA_PTR_FROM_JSON(autoRotate, autoRotate_);
    };
    ScanFileInputConfig() = default ;
    ScanFileInputConfig(const ScanFileInputConfig &) = default ;
    ScanFileInputConfig(ScanFileInputConfig &&) = default ;
    ScanFileInputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanFileInputConfig() = default ;
    ScanFileInputConfig& operator=(const ScanFileInputConfig &) = default ;
    ScanFileInputConfig& operator=(ScanFileInputConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCrop_ == nullptr
        && this->autoRotate_ == nullptr; };
    // autoCrop Field Functions 
    bool hasAutoCrop() const { return this->autoCrop_ != nullptr;};
    void deleteAutoCrop() { this->autoCrop_ = nullptr;};
    inline string getAutoCrop() const { DARABONBA_PTR_GET_DEFAULT(autoCrop_, "") };
    inline ScanFileInputConfig& setAutoCrop(string autoCrop) { DARABONBA_PTR_SET_VALUE(autoCrop_, autoCrop) };


    // autoRotate Field Functions 
    bool hasAutoRotate() const { return this->autoRotate_ != nullptr;};
    void deleteAutoRotate() { this->autoRotate_ = nullptr;};
    inline string getAutoRotate() const { DARABONBA_PTR_GET_DEFAULT(autoRotate_, "") };
    inline ScanFileInputConfig& setAutoRotate(string autoRotate) { DARABONBA_PTR_SET_VALUE(autoRotate_, autoRotate) };


  protected:
    shared_ptr<string> autoCrop_ {};
    shared_ptr<string> autoRotate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
