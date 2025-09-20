// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERFORREQCOVER_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERFORREQCOVER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ClusterForReqCoverFigures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ClusterForReqCover : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterForReqCover& obj) { 
      DARABONBA_PTR_TO_JSON(Figures, figures_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterForReqCover& obj) { 
      DARABONBA_PTR_FROM_JSON(Figures, figures_);
    };
    ClusterForReqCover() = default ;
    ClusterForReqCover(const ClusterForReqCover &) = default ;
    ClusterForReqCover(ClusterForReqCover &&) = default ;
    ClusterForReqCover(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterForReqCover() = default ;
    ClusterForReqCover& operator=(const ClusterForReqCover &) = default ;
    ClusterForReqCover& operator=(ClusterForReqCover &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->figures_ != nullptr; };
    // figures Field Functions 
    bool hasFigures() const { return this->figures_ != nullptr;};
    void deleteFigures() { this->figures_ = nullptr;};
    inline const vector<Models::ClusterForReqCoverFigures> & figures() const { DARABONBA_PTR_GET_CONST(figures_, vector<Models::ClusterForReqCoverFigures>) };
    inline vector<Models::ClusterForReqCoverFigures> figures() { DARABONBA_PTR_GET(figures_, vector<Models::ClusterForReqCoverFigures>) };
    inline ClusterForReqCover& setFigures(const vector<Models::ClusterForReqCoverFigures> & figures) { DARABONBA_PTR_SET_VALUE(figures_, figures) };
    inline ClusterForReqCover& setFigures(vector<Models::ClusterForReqCoverFigures> && figures) { DARABONBA_PTR_SET_RVALUE(figures_, figures) };


  protected:
    std::shared_ptr<vector<Models::ClusterForReqCoverFigures>> figures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
