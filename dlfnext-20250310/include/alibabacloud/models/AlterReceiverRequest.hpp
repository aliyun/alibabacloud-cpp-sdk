// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERRECEIVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALTERRECEIVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class AlterReceiverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterReceiverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(receiverName, receiverName_);
    };
    friend void from_json(const Darabonba::Json& j, AlterReceiverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(receiverName, receiverName_);
    };
    AlterReceiverRequest() = default ;
    AlterReceiverRequest(const AlterReceiverRequest &) = default ;
    AlterReceiverRequest(AlterReceiverRequest &&) = default ;
    AlterReceiverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterReceiverRequest() = default ;
    AlterReceiverRequest& operator=(const AlterReceiverRequest &) = default ;
    AlterReceiverRequest& operator=(AlterReceiverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->receiverName_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline AlterReceiverRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // receiverName Field Functions 
    bool hasReceiverName() const { return this->receiverName_ != nullptr;};
    void deleteReceiverName() { this->receiverName_ = nullptr;};
    inline string receiverName() const { DARABONBA_PTR_GET_DEFAULT(receiverName_, "") };
    inline AlterReceiverRequest& setReceiverName(string receiverName) { DARABONBA_PTR_SET_VALUE(receiverName_, receiverName) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> receiverName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
