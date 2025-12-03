// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTRESULTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTESTRESULTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestResultListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestResultListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(directoryIdentifier, directoryIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestResultListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(directoryIdentifier, directoryIdentifier_);
    };
    GetTestResultListRequest() = default ;
    GetTestResultListRequest(const GetTestResultListRequest &) = default ;
    GetTestResultListRequest(GetTestResultListRequest &&) = default ;
    GetTestResultListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestResultListRequest() = default ;
    GetTestResultListRequest& operator=(const GetTestResultListRequest &) = default ;
    GetTestResultListRequest& operator=(GetTestResultListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->directoryIdentifier_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline GetTestResultListRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // directoryIdentifier Field Functions 
    bool hasDirectoryIdentifier() const { return this->directoryIdentifier_ != nullptr;};
    void deleteDirectoryIdentifier() { this->directoryIdentifier_ = nullptr;};
    inline string directoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(directoryIdentifier_, "") };
    inline GetTestResultListRequest& setDirectoryIdentifier(string directoryIdentifier) { DARABONBA_PTR_SET_VALUE(directoryIdentifier_, directoryIdentifier) };


  protected:
    std::shared_ptr<string> conditions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> directoryIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
