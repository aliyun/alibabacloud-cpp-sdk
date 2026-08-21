// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class BatchDeletePrivateAccessApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeletePrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeletePrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
    };
    BatchDeletePrivateAccessApplicationRequest() = default ;
    BatchDeletePrivateAccessApplicationRequest(const BatchDeletePrivateAccessApplicationRequest &) = default ;
    BatchDeletePrivateAccessApplicationRequest(BatchDeletePrivateAccessApplicationRequest &&) = default ;
    BatchDeletePrivateAccessApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeletePrivateAccessApplicationRequest() = default ;
    BatchDeletePrivateAccessApplicationRequest& operator=(const BatchDeletePrivateAccessApplicationRequest &) = default ;
    BatchDeletePrivateAccessApplicationRequest& operator=(BatchDeletePrivateAccessApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationIds_ == nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & getApplicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> getApplicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline BatchDeletePrivateAccessApplicationRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline BatchDeletePrivateAccessApplicationRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


  protected:
    // The IDs of internal-facing access applications. You can specify up to 100 application IDs.
    shared_ptr<vector<string>> applicationIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
