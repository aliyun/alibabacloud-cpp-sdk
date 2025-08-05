// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERSHARERECEIVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALTERSHARERECEIVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class AlterShareReceiversRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterShareReceiversRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addedReceivers, addedReceivers_);
      DARABONBA_PTR_TO_JSON(removedReceivers, removedReceivers_);
    };
    friend void from_json(const Darabonba::Json& j, AlterShareReceiversRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addedReceivers, addedReceivers_);
      DARABONBA_PTR_FROM_JSON(removedReceivers, removedReceivers_);
    };
    AlterShareReceiversRequest() = default ;
    AlterShareReceiversRequest(const AlterShareReceiversRequest &) = default ;
    AlterShareReceiversRequest(AlterShareReceiversRequest &&) = default ;
    AlterShareReceiversRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterShareReceiversRequest() = default ;
    AlterShareReceiversRequest& operator=(const AlterShareReceiversRequest &) = default ;
    AlterShareReceiversRequest& operator=(AlterShareReceiversRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addedReceivers_ != nullptr
        && this->removedReceivers_ != nullptr; };
    // addedReceivers Field Functions 
    bool hasAddedReceivers() const { return this->addedReceivers_ != nullptr;};
    void deleteAddedReceivers() { this->addedReceivers_ = nullptr;};
    inline const vector<string> & addedReceivers() const { DARABONBA_PTR_GET_CONST(addedReceivers_, vector<string>) };
    inline vector<string> addedReceivers() { DARABONBA_PTR_GET(addedReceivers_, vector<string>) };
    inline AlterShareReceiversRequest& setAddedReceivers(const vector<string> & addedReceivers) { DARABONBA_PTR_SET_VALUE(addedReceivers_, addedReceivers) };
    inline AlterShareReceiversRequest& setAddedReceivers(vector<string> && addedReceivers) { DARABONBA_PTR_SET_RVALUE(addedReceivers_, addedReceivers) };


    // removedReceivers Field Functions 
    bool hasRemovedReceivers() const { return this->removedReceivers_ != nullptr;};
    void deleteRemovedReceivers() { this->removedReceivers_ = nullptr;};
    inline const vector<string> & removedReceivers() const { DARABONBA_PTR_GET_CONST(removedReceivers_, vector<string>) };
    inline vector<string> removedReceivers() { DARABONBA_PTR_GET(removedReceivers_, vector<string>) };
    inline AlterShareReceiversRequest& setRemovedReceivers(const vector<string> & removedReceivers) { DARABONBA_PTR_SET_VALUE(removedReceivers_, removedReceivers) };
    inline AlterShareReceiversRequest& setRemovedReceivers(vector<string> && removedReceivers) { DARABONBA_PTR_SET_RVALUE(removedReceivers_, removedReceivers) };


  protected:
    std::shared_ptr<vector<string>> addedReceivers_ = nullptr;
    std::shared_ptr<vector<string>> removedReceivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
