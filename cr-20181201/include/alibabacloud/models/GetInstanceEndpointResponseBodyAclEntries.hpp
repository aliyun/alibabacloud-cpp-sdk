// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEENDPOINTRESPONSEBODYACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEENDPOINTRESPONSEBODYACLENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetInstanceEndpointResponseBodyAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceEndpointResponseBodyAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceEndpointResponseBodyAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
    };
    GetInstanceEndpointResponseBodyAclEntries() = default ;
    GetInstanceEndpointResponseBodyAclEntries(const GetInstanceEndpointResponseBodyAclEntries &) = default ;
    GetInstanceEndpointResponseBodyAclEntries(GetInstanceEndpointResponseBodyAclEntries &&) = default ;
    GetInstanceEndpointResponseBodyAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceEndpointResponseBodyAclEntries() = default ;
    GetInstanceEndpointResponseBodyAclEntries& operator=(const GetInstanceEndpointResponseBodyAclEntries &) = default ;
    GetInstanceEndpointResponseBodyAclEntries& operator=(GetInstanceEndpointResponseBodyAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->entry_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetInstanceEndpointResponseBodyAclEntries& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string entry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline GetInstanceEndpointResponseBodyAclEntries& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


  protected:
    // Remarks for public IP address whitelists.
    std::shared_ptr<string> comment_ = nullptr;
    // The public IP address whitelist.
    std::shared_ptr<string> entry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
