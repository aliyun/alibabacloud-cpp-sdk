// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTLAYERACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTLAYERACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutLayerACLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutLayerACLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acl, acl_);
      DARABONBA_PTR_TO_JSON(public, public_);
    };
    friend void from_json(const Darabonba::Json& j, PutLayerACLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acl, acl_);
      DARABONBA_PTR_FROM_JSON(public, public_);
    };
    PutLayerACLRequest() = default ;
    PutLayerACLRequest(const PutLayerACLRequest &) = default ;
    PutLayerACLRequest(PutLayerACLRequest &&) = default ;
    PutLayerACLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutLayerACLRequest() = default ;
    PutLayerACLRequest& operator=(const PutLayerACLRequest &) = default ;
    PutLayerACLRequest& operator=(PutLayerACLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acl_ != nullptr
        && this->public_ != nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string acl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline PutLayerACLRequest& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // public Field Functions 
    bool hasPublic() const { return this->public_ != nullptr;};
    void deletePublic() { this->public_ = nullptr;};
    inline string _public() const { DARABONBA_PTR_GET_DEFAULT(public_, "") };
    inline PutLayerACLRequest& setPublic(string _public) { DARABONBA_PTR_SET_VALUE(public_, _public) };


  protected:
    // Specify the access permission of the layer. A value of 1 indicates public and a value of 0 indicates private. The default value is 0.
    std::shared_ptr<string> acl_ = nullptr;
    // Specify whether the layer is a public layer. Valid values: true and false.
    std::shared_ptr<string> public_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
