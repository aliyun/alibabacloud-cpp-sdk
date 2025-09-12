// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUESTAPIPASSTHROUGH_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUESTAPIPASSTHROUGH_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateExternalCACertificateRequestApiPassthroughExtensions.hpp>
#include <alibabacloud/models/CreateExternalCACertificateRequestApiPassthroughSubject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateExternalCACertificateRequestApiPassthrough : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalCACertificateRequestApiPassthrough& obj) { 
      DARABONBA_PTR_TO_JSON(Extensions, extensions_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateRequestApiPassthrough& obj) { 
      DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
    };
    CreateExternalCACertificateRequestApiPassthrough() = default ;
    CreateExternalCACertificateRequestApiPassthrough(const CreateExternalCACertificateRequestApiPassthrough &) = default ;
    CreateExternalCACertificateRequestApiPassthrough(CreateExternalCACertificateRequestApiPassthrough &&) = default ;
    CreateExternalCACertificateRequestApiPassthrough(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalCACertificateRequestApiPassthrough() = default ;
    CreateExternalCACertificateRequestApiPassthrough& operator=(const CreateExternalCACertificateRequestApiPassthrough &) = default ;
    CreateExternalCACertificateRequestApiPassthrough& operator=(CreateExternalCACertificateRequestApiPassthrough &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extensions_ != nullptr
        && this->subject_ != nullptr; };
    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline const Models::CreateExternalCACertificateRequestApiPassthroughExtensions & extensions() const { DARABONBA_PTR_GET_CONST(extensions_, Models::CreateExternalCACertificateRequestApiPassthroughExtensions) };
    inline Models::CreateExternalCACertificateRequestApiPassthroughExtensions extensions() { DARABONBA_PTR_GET(extensions_, Models::CreateExternalCACertificateRequestApiPassthroughExtensions) };
    inline CreateExternalCACertificateRequestApiPassthrough& setExtensions(const Models::CreateExternalCACertificateRequestApiPassthroughExtensions & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
    inline CreateExternalCACertificateRequestApiPassthrough& setExtensions(Models::CreateExternalCACertificateRequestApiPassthroughExtensions && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline const Models::CreateExternalCACertificateRequestApiPassthroughSubject & subject() const { DARABONBA_PTR_GET_CONST(subject_, Models::CreateExternalCACertificateRequestApiPassthroughSubject) };
    inline Models::CreateExternalCACertificateRequestApiPassthroughSubject subject() { DARABONBA_PTR_GET(subject_, Models::CreateExternalCACertificateRequestApiPassthroughSubject) };
    inline CreateExternalCACertificateRequestApiPassthrough& setSubject(const Models::CreateExternalCACertificateRequestApiPassthroughSubject & subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };
    inline CreateExternalCACertificateRequestApiPassthrough& setSubject(Models::CreateExternalCACertificateRequestApiPassthroughSubject && subject) { DARABONBA_PTR_SET_RVALUE(subject_, subject) };


  protected:
    std::shared_ptr<Models::CreateExternalCACertificateRequestApiPassthroughExtensions> extensions_ = nullptr;
    std::shared_ptr<Models::CreateExternalCACertificateRequestApiPassthroughSubject> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
