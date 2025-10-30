// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSAPPLICATIONREQUEST_HPP_
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
  class ListPolicesForPrivateAccessApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
    };
    ListPolicesForPrivateAccessApplicationRequest() = default ;
    ListPolicesForPrivateAccessApplicationRequest(const ListPolicesForPrivateAccessApplicationRequest &) = default ;
    ListPolicesForPrivateAccessApplicationRequest(ListPolicesForPrivateAccessApplicationRequest &&) = default ;
    ListPolicesForPrivateAccessApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessApplicationRequest() = default ;
    ListPolicesForPrivateAccessApplicationRequest& operator=(const ListPolicesForPrivateAccessApplicationRequest &) = default ;
    ListPolicesForPrivateAccessApplicationRequest& operator=(ListPolicesForPrivateAccessApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationIds_ == nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline ListPolicesForPrivateAccessApplicationRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline ListPolicesForPrivateAccessApplicationRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
