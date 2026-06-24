// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READWRITEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_READWRITEPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ReadWritePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadWritePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(autoGeneratePk, autoGeneratePk_);
      DARABONBA_PTR_TO_JSON(writeHa, writeHa_);
      DARABONBA_PTR_TO_JSON(writePolicy, writePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ReadWritePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(autoGeneratePk, autoGeneratePk_);
      DARABONBA_PTR_FROM_JSON(writeHa, writeHa_);
      DARABONBA_PTR_FROM_JSON(writePolicy, writePolicy_);
    };
    ReadWritePolicy() = default ;
    ReadWritePolicy(const ReadWritePolicy &) = default ;
    ReadWritePolicy(ReadWritePolicy &&) = default ;
    ReadWritePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadWritePolicy() = default ;
    ReadWritePolicy& operator=(const ReadWritePolicy &) = default ;
    ReadWritePolicy& operator=(ReadWritePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoGeneratePk_ == nullptr
        && this->writeHa_ == nullptr && this->writePolicy_ == nullptr; };
    // autoGeneratePk Field Functions 
    bool hasAutoGeneratePk() const { return this->autoGeneratePk_ != nullptr;};
    void deleteAutoGeneratePk() { this->autoGeneratePk_ = nullptr;};
    inline bool getAutoGeneratePk() const { DARABONBA_PTR_GET_DEFAULT(autoGeneratePk_, false) };
    inline ReadWritePolicy& setAutoGeneratePk(bool autoGeneratePk) { DARABONBA_PTR_SET_VALUE(autoGeneratePk_, autoGeneratePk) };


    // writeHa Field Functions 
    bool hasWriteHa() const { return this->writeHa_ != nullptr;};
    void deleteWriteHa() { this->writeHa_ = nullptr;};
    inline bool getWriteHa() const { DARABONBA_PTR_GET_DEFAULT(writeHa_, false) };
    inline ReadWritePolicy& setWriteHa(bool writeHa) { DARABONBA_PTR_SET_VALUE(writeHa_, writeHa) };


    // writePolicy Field Functions 
    bool hasWritePolicy() const { return this->writePolicy_ != nullptr;};
    void deleteWritePolicy() { this->writePolicy_ = nullptr;};
    inline string getWritePolicy() const { DARABONBA_PTR_GET_DEFAULT(writePolicy_, "") };
    inline ReadWritePolicy& setWritePolicy(string writePolicy) { DARABONBA_PTR_SET_VALUE(writePolicy_, writePolicy) };


  protected:
    // Specifies whether to automatically generate a document hash primary key when no primary key exists. Valid values:
    // 
    // - true (default): automatically generates a primary key.
    // - false: does not automatically generate a primary key.
    // 
    // >Notice:  autoGeneratePk cannot be modified independently. The autoGeneratePk setting takes effect only when writeHa is changed from false to true.
    // .
    shared_ptr<bool> autoGeneratePk_ {};
    // Specifies whether to enable the write high-availability feature. Valid values:
    // 
    // - true: enabled.
    // - false: not enabled.
    shared_ptr<bool> writeHa_ {};
    // Temporarily switches between synchronous and asynchronous high availability. Valid values:
    // 
    // - sync: temporarily switches from asynchronous write high availability to synchronous write.
    // - async: restores asynchronous write high availability after synchronous write is temporarily enabled.
    // 
    // > This field takes effect only when high availability is enabled, that is, writeHa is set to true. You do not need to pass in the writeHa field when setting this field.
    shared_ptr<string> writePolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
