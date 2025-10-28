// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTREQUESTOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTREQUESTOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListExperimentRequestOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentRequestOptions& obj) { 
      DARABONBA_PTR_TO_JSON(match_name_exactly, matchNameExactly_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentRequestOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(match_name_exactly, matchNameExactly_);
    };
    ListExperimentRequestOptions() = default ;
    ListExperimentRequestOptions(const ListExperimentRequestOptions &) = default ;
    ListExperimentRequestOptions(ListExperimentRequestOptions &&) = default ;
    ListExperimentRequestOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentRequestOptions() = default ;
    ListExperimentRequestOptions& operator=(const ListExperimentRequestOptions &) = default ;
    ListExperimentRequestOptions& operator=(ListExperimentRequestOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchNameExactly_ == nullptr; };
    // matchNameExactly Field Functions 
    bool hasMatchNameExactly() const { return this->matchNameExactly_ != nullptr;};
    void deleteMatchNameExactly() { this->matchNameExactly_ = nullptr;};
    inline string matchNameExactly() const { DARABONBA_PTR_GET_DEFAULT(matchNameExactly_, "") };
    inline ListExperimentRequestOptions& setMatchNameExactly(string matchNameExactly) { DARABONBA_PTR_SET_VALUE(matchNameExactly_, matchNameExactly) };


  protected:
    // Specifies whether to exactly match the experiment by name. Valid values: true and false.
    std::shared_ptr<string> matchNameExactly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
