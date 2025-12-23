// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEABTESTFIXEDFLOWDIVIDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEABTESTFIXEDFLOWDIVIDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateABTestFixedFlowDividersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateABTestFixedFlowDividersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateABTestFixedFlowDividersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateABTestFixedFlowDividersRequest() = default ;
    UpdateABTestFixedFlowDividersRequest(const UpdateABTestFixedFlowDividersRequest &) = default ;
    UpdateABTestFixedFlowDividersRequest(UpdateABTestFixedFlowDividersRequest &&) = default ;
    UpdateABTestFixedFlowDividersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateABTestFixedFlowDividersRequest() = default ;
    UpdateABTestFixedFlowDividersRequest& operator=(const UpdateABTestFixedFlowDividersRequest &) = default ;
    UpdateABTestFixedFlowDividersRequest& operator=(UpdateABTestFixedFlowDividersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<string> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<string>) };
    inline vector<string> body() { DARABONBA_PTR_GET(body_, vector<string>) };
    inline UpdateABTestFixedFlowDividersRequest& setBody(const vector<string> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateABTestFixedFlowDividersRequest& setBody(vector<string> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    std::shared_ptr<vector<string>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
