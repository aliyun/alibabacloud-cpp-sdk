// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAINODESREQUESTDBNODES_HPP_
#define ALIBABACLOUD_MODELS_CREATEAINODESREQUESTDBNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAINodesRequestDBNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAINodesRequestDBNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAINodesRequestDBNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
    };
    CreateAINodesRequestDBNodes() = default ;
    CreateAINodesRequestDBNodes(const CreateAINodesRequestDBNodes &) = default ;
    CreateAINodesRequestDBNodes(CreateAINodesRequestDBNodes &&) = default ;
    CreateAINodesRequestDBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAINodesRequestDBNodes() = default ;
    CreateAINodesRequestDBNodes& operator=(const CreateAINodesRequestDBNodes &) = default ;
    CreateAINodesRequestDBNodes& operator=(CreateAINodesRequestDBNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeClass_ == nullptr; };
    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline CreateAINodesRequestDBNodes& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


  protected:
    std::shared_ptr<string> DBNodeClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
