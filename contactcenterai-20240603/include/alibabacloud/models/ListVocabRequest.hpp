// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOCABREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVOCABREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class ListVocabRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVocabRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVocabRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListVocabRequest() = default ;
    ListVocabRequest(const ListVocabRequest &) = default ;
    ListVocabRequest(ListVocabRequest &&) = default ;
    ListVocabRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVocabRequest() = default ;
    ListVocabRequest& operator=(const ListVocabRequest &) = default ;
    ListVocabRequest& operator=(ListVocabRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListVocabRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
