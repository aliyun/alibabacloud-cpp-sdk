// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMRELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(relationType, relationType_);
    };
    GetWorkitemRelationsRequest() = default ;
    GetWorkitemRelationsRequest(const GetWorkitemRelationsRequest &) = default ;
    GetWorkitemRelationsRequest(GetWorkitemRelationsRequest &&) = default ;
    GetWorkitemRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemRelationsRequest() = default ;
    GetWorkitemRelationsRequest& operator=(const GetWorkitemRelationsRequest &) = default ;
    GetWorkitemRelationsRequest& operator=(GetWorkitemRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relationType_ == nullptr; };
    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline GetWorkitemRelationsRequest& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> relationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
