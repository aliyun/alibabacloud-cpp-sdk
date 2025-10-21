// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUDFARTIFACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUDFARTIFACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetUdfArtifactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUdfArtifactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(udfArtifactName, udfArtifactName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUdfArtifactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(udfArtifactName, udfArtifactName_);
    };
    GetUdfArtifactsRequest() = default ;
    GetUdfArtifactsRequest(const GetUdfArtifactsRequest &) = default ;
    GetUdfArtifactsRequest(GetUdfArtifactsRequest &&) = default ;
    GetUdfArtifactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUdfArtifactsRequest() = default ;
    GetUdfArtifactsRequest& operator=(const GetUdfArtifactsRequest &) = default ;
    GetUdfArtifactsRequest& operator=(GetUdfArtifactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->udfArtifactName_ == nullptr; };
    // udfArtifactName Field Functions 
    bool hasUdfArtifactName() const { return this->udfArtifactName_ != nullptr;};
    void deleteUdfArtifactName() { this->udfArtifactName_ = nullptr;};
    inline string udfArtifactName() const { DARABONBA_PTR_GET_DEFAULT(udfArtifactName_, "") };
    inline GetUdfArtifactsRequest& setUdfArtifactName(string udfArtifactName) { DARABONBA_PTR_SET_VALUE(udfArtifactName_, udfArtifactName) };


  protected:
    // The name of the JAR or Python file that corresponds to the UDF.
    std::shared_ptr<string> udfArtifactName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
