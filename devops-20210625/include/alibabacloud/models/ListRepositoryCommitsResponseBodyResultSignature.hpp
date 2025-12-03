// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYCOMMITSRESPONSEBODYRESULTSIGNATURE_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYCOMMITSRESPONSEBODYRESULTSIGNATURE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoryCommitsResponseBodyResultSignature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryCommitsResponseBodyResultSignature& obj) { 
      DARABONBA_PTR_TO_JSON(gpgKeyId, gpgKeyId_);
      DARABONBA_PTR_TO_JSON(verificationStatus, verificationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryCommitsResponseBodyResultSignature& obj) { 
      DARABONBA_PTR_FROM_JSON(gpgKeyId, gpgKeyId_);
      DARABONBA_PTR_FROM_JSON(verificationStatus, verificationStatus_);
    };
    ListRepositoryCommitsResponseBodyResultSignature() = default ;
    ListRepositoryCommitsResponseBodyResultSignature(const ListRepositoryCommitsResponseBodyResultSignature &) = default ;
    ListRepositoryCommitsResponseBodyResultSignature(ListRepositoryCommitsResponseBodyResultSignature &&) = default ;
    ListRepositoryCommitsResponseBodyResultSignature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryCommitsResponseBodyResultSignature() = default ;
    ListRepositoryCommitsResponseBodyResultSignature& operator=(const ListRepositoryCommitsResponseBodyResultSignature &) = default ;
    ListRepositoryCommitsResponseBodyResultSignature& operator=(ListRepositoryCommitsResponseBodyResultSignature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gpgKeyId_ == nullptr
        && return this->verificationStatus_ == nullptr; };
    // gpgKeyId Field Functions 
    bool hasGpgKeyId() const { return this->gpgKeyId_ != nullptr;};
    void deleteGpgKeyId() { this->gpgKeyId_ = nullptr;};
    inline string gpgKeyId() const { DARABONBA_PTR_GET_DEFAULT(gpgKeyId_, "") };
    inline ListRepositoryCommitsResponseBodyResultSignature& setGpgKeyId(string gpgKeyId) { DARABONBA_PTR_SET_VALUE(gpgKeyId_, gpgKeyId) };


    // verificationStatus Field Functions 
    bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
    void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
    inline string verificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, "") };
    inline ListRepositoryCommitsResponseBodyResultSignature& setVerificationStatus(string verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


  protected:
    std::shared_ptr<string> gpgKeyId_ = nullptr;
    std::shared_ptr<string> verificationStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
