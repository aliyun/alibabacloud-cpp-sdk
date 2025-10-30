// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUESTAPIPASSTHROUGHEXTENSIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUESTAPIPASSTHROUGHEXTENSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateExternalCACertificateRequestApiPassthroughExtensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalCACertificateRequestApiPassthroughExtensions& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendedKeyUsages, extendedKeyUsages_);
      DARABONBA_PTR_TO_JSON(PathLenConstraint, pathLenConstraint_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateRequestApiPassthroughExtensions& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendedKeyUsages, extendedKeyUsages_);
      DARABONBA_PTR_FROM_JSON(PathLenConstraint, pathLenConstraint_);
    };
    CreateExternalCACertificateRequestApiPassthroughExtensions() = default ;
    CreateExternalCACertificateRequestApiPassthroughExtensions(const CreateExternalCACertificateRequestApiPassthroughExtensions &) = default ;
    CreateExternalCACertificateRequestApiPassthroughExtensions(CreateExternalCACertificateRequestApiPassthroughExtensions &&) = default ;
    CreateExternalCACertificateRequestApiPassthroughExtensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalCACertificateRequestApiPassthroughExtensions() = default ;
    CreateExternalCACertificateRequestApiPassthroughExtensions& operator=(const CreateExternalCACertificateRequestApiPassthroughExtensions &) = default ;
    CreateExternalCACertificateRequestApiPassthroughExtensions& operator=(CreateExternalCACertificateRequestApiPassthroughExtensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extendedKeyUsages_ == nullptr
        && return this->pathLenConstraint_ == nullptr; };
    // extendedKeyUsages Field Functions 
    bool hasExtendedKeyUsages() const { return this->extendedKeyUsages_ != nullptr;};
    void deleteExtendedKeyUsages() { this->extendedKeyUsages_ = nullptr;};
    inline const vector<string> & extendedKeyUsages() const { DARABONBA_PTR_GET_CONST(extendedKeyUsages_, vector<string>) };
    inline vector<string> extendedKeyUsages() { DARABONBA_PTR_GET(extendedKeyUsages_, vector<string>) };
    inline CreateExternalCACertificateRequestApiPassthroughExtensions& setExtendedKeyUsages(const vector<string> & extendedKeyUsages) { DARABONBA_PTR_SET_VALUE(extendedKeyUsages_, extendedKeyUsages) };
    inline CreateExternalCACertificateRequestApiPassthroughExtensions& setExtendedKeyUsages(vector<string> && extendedKeyUsages) { DARABONBA_PTR_SET_RVALUE(extendedKeyUsages_, extendedKeyUsages) };


    // pathLenConstraint Field Functions 
    bool hasPathLenConstraint() const { return this->pathLenConstraint_ != nullptr;};
    void deletePathLenConstraint() { this->pathLenConstraint_ = nullptr;};
    inline int32_t pathLenConstraint() const { DARABONBA_PTR_GET_DEFAULT(pathLenConstraint_, 0) };
    inline CreateExternalCACertificateRequestApiPassthroughExtensions& setPathLenConstraint(int32_t pathLenConstraint) { DARABONBA_PTR_SET_VALUE(pathLenConstraint_, pathLenConstraint) };


  protected:
    std::shared_ptr<vector<string>> extendedKeyUsages_ = nullptr;
    std::shared_ptr<int32_t> pathLenConstraint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
