// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYREQUESTREPOPATH_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYREQUESTREPOPATH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchRepositoryRequestRepoPath : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchRepositoryRequestRepoPath& obj) { 
      DARABONBA_PTR_TO_JSON(matchType, matchType_);
      DARABONBA_PTR_TO_JSON(operatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchRepositoryRequestRepoPath& obj) { 
      DARABONBA_PTR_FROM_JSON(matchType, matchType_);
      DARABONBA_PTR_FROM_JSON(operatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListSearchRepositoryRequestRepoPath() = default ;
    ListSearchRepositoryRequestRepoPath(const ListSearchRepositoryRequestRepoPath &) = default ;
    ListSearchRepositoryRequestRepoPath(ListSearchRepositoryRequestRepoPath &&) = default ;
    ListSearchRepositoryRequestRepoPath(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchRepositoryRequestRepoPath() = default ;
    ListSearchRepositoryRequestRepoPath& operator=(const ListSearchRepositoryRequestRepoPath &) = default ;
    ListSearchRepositoryRequestRepoPath& operator=(ListSearchRepositoryRequestRepoPath &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchType_ == nullptr
        && return this->operatorType_ == nullptr && return this->value_ == nullptr; };
    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline ListSearchRepositoryRequestRepoPath& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline ListSearchRepositoryRequestRepoPath& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListSearchRepositoryRequestRepoPath& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> matchType_ = nullptr;
    std::shared_ptr<string> operatorType_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
