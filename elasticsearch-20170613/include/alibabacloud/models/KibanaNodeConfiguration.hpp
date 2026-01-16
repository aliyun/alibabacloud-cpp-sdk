// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KIBANANODECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_KIBANANODECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class KibanaNodeConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KibanaNodeConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, KibanaNodeConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    KibanaNodeConfiguration() = default ;
    KibanaNodeConfiguration(const KibanaNodeConfiguration &) = default ;
    KibanaNodeConfiguration(KibanaNodeConfiguration &&) = default ;
    KibanaNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KibanaNodeConfiguration() = default ;
    KibanaNodeConfiguration& operator=(const KibanaNodeConfiguration &) = default ;
    KibanaNodeConfiguration& operator=(KibanaNodeConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->spec_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline KibanaNodeConfiguration& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int64_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0L) };
    inline KibanaNodeConfiguration& setDisk(int64_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline KibanaNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    shared_ptr<int64_t> amount_ {};
    shared_ptr<int64_t> disk_ {};
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
