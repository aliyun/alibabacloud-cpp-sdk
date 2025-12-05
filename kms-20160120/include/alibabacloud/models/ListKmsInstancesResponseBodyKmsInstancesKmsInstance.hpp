// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKMSINSTANCESRESPONSEBODYKMSINSTANCESKMSINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_LISTKMSINSTANCESRESPONSEBODYKMSINSTANCESKMSINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKmsInstancesResponseBodyKmsInstancesKmsInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKmsInstancesResponseBodyKmsInstancesKmsInstance& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstanceArn, kmsInstanceArn_);
      DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKmsInstancesResponseBodyKmsInstancesKmsInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstanceArn, kmsInstanceArn_);
      DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
    };
    ListKmsInstancesResponseBodyKmsInstancesKmsInstance() = default ;
    ListKmsInstancesResponseBodyKmsInstancesKmsInstance(const ListKmsInstancesResponseBodyKmsInstancesKmsInstance &) = default ;
    ListKmsInstancesResponseBodyKmsInstancesKmsInstance(ListKmsInstancesResponseBodyKmsInstancesKmsInstance &&) = default ;
    ListKmsInstancesResponseBodyKmsInstancesKmsInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKmsInstancesResponseBodyKmsInstancesKmsInstance() = default ;
    ListKmsInstancesResponseBodyKmsInstancesKmsInstance& operator=(const ListKmsInstancesResponseBodyKmsInstancesKmsInstance &) = default ;
    ListKmsInstancesResponseBodyKmsInstancesKmsInstance& operator=(ListKmsInstancesResponseBodyKmsInstancesKmsInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsInstanceArn_ == nullptr
        && return this->kmsInstanceId_ == nullptr; };
    // kmsInstanceArn Field Functions 
    bool hasKmsInstanceArn() const { return this->kmsInstanceArn_ != nullptr;};
    void deleteKmsInstanceArn() { this->kmsInstanceArn_ = nullptr;};
    inline string kmsInstanceArn() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceArn_, "") };
    inline ListKmsInstancesResponseBodyKmsInstancesKmsInstance& setKmsInstanceArn(string kmsInstanceArn) { DARABONBA_PTR_SET_VALUE(kmsInstanceArn_, kmsInstanceArn) };


    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string kmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline ListKmsInstancesResponseBodyKmsInstancesKmsInstance& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


  protected:
    // The ARN of the KMS instance.
    std::shared_ptr<string> kmsInstanceArn_ = nullptr;
    // The ID of the KMS instance.
    std::shared_ptr<string> kmsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
