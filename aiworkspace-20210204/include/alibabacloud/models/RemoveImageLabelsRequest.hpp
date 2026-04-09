// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEIMAGELABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEIMAGELABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class RemoveImageLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveImageLabelsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, RemoveImageLabelsRequest& obj) { 
      (void)j; (void)obj; 
    };
    RemoveImageLabelsRequest() = default ;
    RemoveImageLabelsRequest(const RemoveImageLabelsRequest &) = default ;
    RemoveImageLabelsRequest(RemoveImageLabelsRequest &&) = default ;
    RemoveImageLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveImageLabelsRequest() = default ;
    RemoveImageLabelsRequest& operator=(const RemoveImageLabelsRequest &) = default ;
    RemoveImageLabelsRequest& operator=(RemoveImageLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
