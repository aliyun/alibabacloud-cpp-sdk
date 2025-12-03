// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHSOURCECODEREQUESTREPOPATH_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHSOURCECODEREQUESTREPOPATH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchSourceCodeRequestRepoPath : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchSourceCodeRequestRepoPath& obj) { 
      DARABONBA_PTR_TO_JSON(matchType, matchType_);
      DARABONBA_PTR_TO_JSON(operatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchSourceCodeRequestRepoPath& obj) { 
      DARABONBA_PTR_FROM_JSON(matchType, matchType_);
      DARABONBA_PTR_FROM_JSON(operatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListSearchSourceCodeRequestRepoPath() = default ;
    ListSearchSourceCodeRequestRepoPath(const ListSearchSourceCodeRequestRepoPath &) = default ;
    ListSearchSourceCodeRequestRepoPath(ListSearchSourceCodeRequestRepoPath &&) = default ;
    ListSearchSourceCodeRequestRepoPath(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchSourceCodeRequestRepoPath() = default ;
    ListSearchSourceCodeRequestRepoPath& operator=(const ListSearchSourceCodeRequestRepoPath &) = default ;
    ListSearchSourceCodeRequestRepoPath& operator=(ListSearchSourceCodeRequestRepoPath &&) = default ;
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
    inline ListSearchSourceCodeRequestRepoPath& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline ListSearchSourceCodeRequestRepoPath& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListSearchSourceCodeRequestRepoPath& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> matchType_ = nullptr;
    std::shared_ptr<string> operatorType_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
