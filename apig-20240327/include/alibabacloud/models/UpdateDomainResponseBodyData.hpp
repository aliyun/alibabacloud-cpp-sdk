// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateDomainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDomainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(deployRevisionId, deployRevisionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDomainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(deployRevisionId, deployRevisionId_);
    };
    UpdateDomainResponseBodyData() = default ;
    UpdateDomainResponseBodyData(const UpdateDomainResponseBodyData &) = default ;
    UpdateDomainResponseBodyData(UpdateDomainResponseBodyData &&) = default ;
    UpdateDomainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDomainResponseBodyData() = default ;
    UpdateDomainResponseBodyData& operator=(const UpdateDomainResponseBodyData &) = default ;
    UpdateDomainResponseBodyData& operator=(UpdateDomainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployRevisionId_ == nullptr; };
    // deployRevisionId Field Functions 
    bool hasDeployRevisionId() const { return this->deployRevisionId_ != nullptr;};
    void deleteDeployRevisionId() { this->deployRevisionId_ = nullptr;};
    inline string deployRevisionId() const { DARABONBA_PTR_GET_DEFAULT(deployRevisionId_, "") };
    inline UpdateDomainResponseBodyData& setDeployRevisionId(string deployRevisionId) { DARABONBA_PTR_SET_VALUE(deployRevisionId_, deployRevisionId) };


  protected:
    // The released version ID.
    std::shared_ptr<string> deployRevisionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
