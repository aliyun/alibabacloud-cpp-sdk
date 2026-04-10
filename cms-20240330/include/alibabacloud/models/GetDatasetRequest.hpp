// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetDatasetRequest() = default ;
    GetDatasetRequest(const GetDatasetRequest &) = default ;
    GetDatasetRequest(GetDatasetRequest &&) = default ;
    GetDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetRequest() = default ;
    GetDatasetRequest& operator=(const GetDatasetRequest &) = default ;
    GetDatasetRequest& operator=(GetDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
