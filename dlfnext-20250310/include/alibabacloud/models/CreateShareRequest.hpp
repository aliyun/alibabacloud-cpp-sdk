// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class CreateShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(enableWrite, enableWrite_);
      DARABONBA_PTR_TO_JSON(shareName, shareName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(enableWrite, enableWrite_);
      DARABONBA_PTR_FROM_JSON(shareName, shareName_);
    };
    CreateShareRequest() = default ;
    CreateShareRequest(const CreateShareRequest &) = default ;
    CreateShareRequest(CreateShareRequest &&) = default ;
    CreateShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateShareRequest() = default ;
    CreateShareRequest& operator=(const CreateShareRequest &) = default ;
    CreateShareRequest& operator=(CreateShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->enableWrite_ != nullptr && this->shareName_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateShareRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // enableWrite Field Functions 
    bool hasEnableWrite() const { return this->enableWrite_ != nullptr;};
    void deleteEnableWrite() { this->enableWrite_ = nullptr;};
    inline bool enableWrite() const { DARABONBA_PTR_GET_DEFAULT(enableWrite_, false) };
    inline CreateShareRequest& setEnableWrite(bool enableWrite) { DARABONBA_PTR_SET_VALUE(enableWrite_, enableWrite) };


    // shareName Field Functions 
    bool hasShareName() const { return this->shareName_ != nullptr;};
    void deleteShareName() { this->shareName_ = nullptr;};
    inline string shareName() const { DARABONBA_PTR_GET_DEFAULT(shareName_, "") };
    inline CreateShareRequest& setShareName(string shareName) { DARABONBA_PTR_SET_VALUE(shareName_, shareName) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<bool> enableWrite_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> shareName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
