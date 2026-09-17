// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTRENDERINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTRENDERINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RebootRenderingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootRenderingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Precheck, precheck_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, RebootRenderingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Precheck, precheck_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    RebootRenderingServerRequest() = default ;
    RebootRenderingServerRequest(const RebootRenderingServerRequest &) = default ;
    RebootRenderingServerRequest(RebootRenderingServerRequest &&) = default ;
    RebootRenderingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootRenderingServerRequest() = default ;
    RebootRenderingServerRequest& operator=(const RebootRenderingServerRequest &) = default ;
    RebootRenderingServerRequest& operator=(RebootRenderingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->precheck_ == nullptr
        && this->renderingInstanceIds_ == nullptr; };
    // precheck Field Functions 
    bool hasPrecheck() const { return this->precheck_ != nullptr;};
    void deletePrecheck() { this->precheck_ = nullptr;};
    inline bool getPrecheck() const { DARABONBA_PTR_GET_DEFAULT(precheck_, false) };
    inline RebootRenderingServerRequest& setPrecheck(bool precheck) { DARABONBA_PTR_SET_VALUE(precheck_, precheck) };


    // renderingInstanceIds Field Functions 
    bool hasRenderingInstanceIds() const { return this->renderingInstanceIds_ != nullptr;};
    void deleteRenderingInstanceIds() { this->renderingInstanceIds_ = nullptr;};
    inline const vector<string> & getRenderingInstanceIds() const { DARABONBA_PTR_GET_CONST(renderingInstanceIds_, vector<string>) };
    inline vector<string> getRenderingInstanceIds() { DARABONBA_PTR_GET(renderingInstanceIds_, vector<string>) };
    inline RebootRenderingServerRequest& setRenderingInstanceIds(const vector<string> & renderingInstanceIds) { DARABONBA_PTR_SET_VALUE(renderingInstanceIds_, renderingInstanceIds) };
    inline RebootRenderingServerRequest& setRenderingInstanceIds(vector<string> && renderingInstanceIds) { DARABONBA_PTR_SET_RVALUE(renderingInstanceIds_, renderingInstanceIds) };


  protected:
    // Specifies whether to perform only an admission check without actually restarting the hosts. Default value: false.
    shared_ptr<bool> precheck_ {};
    // The list of cloud application service instance IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> renderingInstanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
