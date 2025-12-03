// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListPipelineRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(relObjectType, relObjectType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(relObjectType, relObjectType_);
    };
    ListPipelineRelationsRequest() = default ;
    ListPipelineRelationsRequest(const ListPipelineRelationsRequest &) = default ;
    ListPipelineRelationsRequest(ListPipelineRelationsRequest &&) = default ;
    ListPipelineRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRelationsRequest() = default ;
    ListPipelineRelationsRequest& operator=(const ListPipelineRelationsRequest &) = default ;
    ListPipelineRelationsRequest& operator=(ListPipelineRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relObjectType_ == nullptr; };
    // relObjectType Field Functions 
    bool hasRelObjectType() const { return this->relObjectType_ != nullptr;};
    void deleteRelObjectType() { this->relObjectType_ = nullptr;};
    inline string relObjectType() const { DARABONBA_PTR_GET_DEFAULT(relObjectType_, "") };
    inline ListPipelineRelationsRequest& setRelObjectType(string relObjectType) { DARABONBA_PTR_SET_VALUE(relObjectType_, relObjectType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> relObjectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
