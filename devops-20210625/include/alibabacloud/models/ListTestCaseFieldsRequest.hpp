// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTESTCASEFIELDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTESTCASEFIELDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListTestCaseFieldsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTestCaseFieldsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListTestCaseFieldsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
    };
    ListTestCaseFieldsRequest() = default ;
    ListTestCaseFieldsRequest(const ListTestCaseFieldsRequest &) = default ;
    ListTestCaseFieldsRequest(ListTestCaseFieldsRequest &&) = default ;
    ListTestCaseFieldsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTestCaseFieldsRequest() = default ;
    ListTestCaseFieldsRequest& operator=(const ListTestCaseFieldsRequest &) = default ;
    ListTestCaseFieldsRequest& operator=(ListTestCaseFieldsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->spaceIdentifier_ == nullptr; };
    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline ListTestCaseFieldsRequest& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
