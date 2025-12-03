// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVPCACCESSRESPONSEBODYAPIS_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVPCACCESSRESPONSEBODYAPIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveVpcAccessResponseBodyApisApi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveVpcAccessResponseBodyApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVpcAccessResponseBodyApis& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVpcAccessResponseBodyApis& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
    };
    RemoveVpcAccessResponseBodyApis() = default ;
    RemoveVpcAccessResponseBodyApis(const RemoveVpcAccessResponseBodyApis &) = default ;
    RemoveVpcAccessResponseBodyApis(RemoveVpcAccessResponseBodyApis &&) = default ;
    RemoveVpcAccessResponseBodyApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVpcAccessResponseBodyApis() = default ;
    RemoveVpcAccessResponseBodyApis& operator=(const RemoveVpcAccessResponseBodyApis &) = default ;
    RemoveVpcAccessResponseBodyApis& operator=(RemoveVpcAccessResponseBodyApis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline const vector<Models::RemoveVpcAccessResponseBodyApisApi> & api() const { DARABONBA_PTR_GET_CONST(api_, vector<Models::RemoveVpcAccessResponseBodyApisApi>) };
    inline vector<Models::RemoveVpcAccessResponseBodyApisApi> api() { DARABONBA_PTR_GET(api_, vector<Models::RemoveVpcAccessResponseBodyApisApi>) };
    inline RemoveVpcAccessResponseBodyApis& setApi(const vector<Models::RemoveVpcAccessResponseBodyApisApi> & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
    inline RemoveVpcAccessResponseBodyApis& setApi(vector<Models::RemoveVpcAccessResponseBodyApisApi> && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


  protected:
    std::shared_ptr<vector<Models::RemoveVpcAccessResponseBodyApisApi>> api_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
