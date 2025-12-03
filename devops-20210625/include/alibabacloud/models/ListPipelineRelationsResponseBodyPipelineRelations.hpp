// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERELATIONSRESPONSEBODYPIPELINERELATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERELATIONSRESPONSEBODYPIPELINERELATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListPipelineRelationsResponseBodyPipelineRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRelationsResponseBodyPipelineRelations& obj) { 
      DARABONBA_PTR_TO_JSON(refObjectId, refObjectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRelationsResponseBodyPipelineRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(refObjectId, refObjectId_);
    };
    ListPipelineRelationsResponseBodyPipelineRelations() = default ;
    ListPipelineRelationsResponseBodyPipelineRelations(const ListPipelineRelationsResponseBodyPipelineRelations &) = default ;
    ListPipelineRelationsResponseBodyPipelineRelations(ListPipelineRelationsResponseBodyPipelineRelations &&) = default ;
    ListPipelineRelationsResponseBodyPipelineRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRelationsResponseBodyPipelineRelations() = default ;
    ListPipelineRelationsResponseBodyPipelineRelations& operator=(const ListPipelineRelationsResponseBodyPipelineRelations &) = default ;
    ListPipelineRelationsResponseBodyPipelineRelations& operator=(ListPipelineRelationsResponseBodyPipelineRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->refObjectId_ == nullptr; };
    // refObjectId Field Functions 
    bool hasRefObjectId() const { return this->refObjectId_ != nullptr;};
    void deleteRefObjectId() { this->refObjectId_ = nullptr;};
    inline int64_t refObjectId() const { DARABONBA_PTR_GET_DEFAULT(refObjectId_, 0L) };
    inline ListPipelineRelationsResponseBodyPipelineRelations& setRefObjectId(int64_t refObjectId) { DARABONBA_PTR_SET_VALUE(refObjectId_, refObjectId) };


  protected:
    std::shared_ptr<int64_t> refObjectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
