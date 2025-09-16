// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTQUERYNODE_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTQUERYNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateClusterRequestQueryNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestQueryNode& obj) { 
      DARABONBA_PTR_TO_JSON(number, number_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestQueryNode& obj) { 
      DARABONBA_PTR_FROM_JSON(number, number_);
    };
    CreateClusterRequestQueryNode() = default ;
    CreateClusterRequestQueryNode(const CreateClusterRequestQueryNode &) = default ;
    CreateClusterRequestQueryNode(CreateClusterRequestQueryNode &&) = default ;
    CreateClusterRequestQueryNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestQueryNode() = default ;
    CreateClusterRequestQueryNode& operator=(const CreateClusterRequestQueryNode &) = default ;
    CreateClusterRequestQueryNode& operator=(CreateClusterRequestQueryNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->number_ != nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline CreateClusterRequestQueryNode& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    // The number of QRS workers.
    std::shared_ptr<int32_t> number_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
