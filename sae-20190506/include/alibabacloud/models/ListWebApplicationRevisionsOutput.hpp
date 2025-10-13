// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONREVISIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONREVISIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Revision.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListWebApplicationRevisionsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebApplicationRevisionsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Revisions, revisions_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebApplicationRevisionsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Revisions, revisions_);
    };
    ListWebApplicationRevisionsOutput() = default ;
    ListWebApplicationRevisionsOutput(const ListWebApplicationRevisionsOutput &) = default ;
    ListWebApplicationRevisionsOutput(ListWebApplicationRevisionsOutput &&) = default ;
    ListWebApplicationRevisionsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebApplicationRevisionsOutput() = default ;
    ListWebApplicationRevisionsOutput& operator=(const ListWebApplicationRevisionsOutput &) = default ;
    ListWebApplicationRevisionsOutput& operator=(ListWebApplicationRevisionsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->revisions_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWebApplicationRevisionsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // revisions Field Functions 
    bool hasRevisions() const { return this->revisions_ != nullptr;};
    void deleteRevisions() { this->revisions_ = nullptr;};
    inline const vector<Revision> & revisions() const { DARABONBA_PTR_GET_CONST(revisions_, vector<Revision>) };
    inline vector<Revision> revisions() { DARABONBA_PTR_GET(revisions_, vector<Revision>) };
    inline ListWebApplicationRevisionsOutput& setRevisions(const vector<Revision> & revisions) { DARABONBA_PTR_SET_VALUE(revisions_, revisions) };
    inline ListWebApplicationRevisionsOutput& setRevisions(vector<Revision> && revisions) { DARABONBA_PTR_SET_RVALUE(revisions_, revisions) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<Revision>> revisions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
